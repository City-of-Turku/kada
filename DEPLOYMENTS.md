# Deploments

## Development and Staging environments

The development environment is meant to be used for internal testing and demoing for the project stakeholders.
It is accessible at https://pori.dev.wunder.io

The staging environment is used for quality assurance and should mimic the production as closely as possible.
Content is cloned from production to staging environment on weekly basis.
Staging site is accessible at https://pori.stage.wunder.io

[Deploybot](https://wunder.deploybot.com/) is set up to automatically track develop and master branches and deploy whenever new code is pushed there.
Develop branch is deployed to development environment and master deployed to staging environment.

### Continous Integration & automated tests

[Travis CI] is used for automated build and testing tool. It runs build process and executed automated tests but doesn't affect the actual deployment.
Deployments are disconnected from CI results which means the automated deployments will still be triggered when Travis says "failed".

There's a limited set of automated test scenarios written with Codeception. They're run by Travis and could be run independently on localhost too.
Please see the readme file in the tests directory.


## Production environment

Production deployment has to be manually triggered in [Deploybot](https://wunder.deploybot.com/) deployment section. The rest of the steps are automated.

### Urgent fixes

There are cases when a fix is required right now but deployment would be overkill. For example 'checkbox' fixes where you need to enable one small thing which would cause overridden feature.
Within reason this is ok to do in production. After it's done export the overridden feature and commit into a hotfix branch.
Merge the branch to develop and create pull request again master noting that you have done the fix in production and this is a feature export for it.
This will make sure that the code ends up in production for the next release.


### Regular release

We usually stick to the following deployment procedure. Try not to merge any hotfix or feature branches to master on your own.
If anyone is available to assist - do code reviews. In order to have the least possible impact on application users any deployments should happen insode the predefined maintenance window timeframes.
Remember to agree with the customer that there will be a release happening.

1. Merge all feature and hotfix branches to `master` branch.
2. Test whatever needs to be tested on the staging environment.
3. Merge master branch into production, and [tag](#tags) it.

```
git checkout production
git merge --no-ff master
git tag 1.your.tag.version
git push origin HEAD
git push --tags
```

Tip: Take your time to create a detailed merge commit message containing included tickets and any comments that might be relevant. This will make it easier to find which ticket has been deployed when.


#### <span id='tags'>Tagging</span>

It's encouraged to use [Semantic Versioning](http://semver.org/) for tagging releases. The tagging goes as follows:
`a.b.c.d` where:
* `a` is main project version
* `b` is a quarter release
* `c` is a regular feature release
* `d` is a hotfix release.

For example 1.4.5.0
Check for the latest tag with `git tag`


## FAQ

#### Build was successful but registry is broken

When you see `Fatal error: Class 'FeedsProcessor' not found` or similar PHP fatal error message it is likely that your site's code registry is in disorder. You can rebuild the registry with the following commands:

```
drush @none dl registry_rebuild
drush sqlq "TRUNCATE cache_bootstrap; TRUNCATE registry; TRUNCATE registry_file;"
drush rr --fire-bazooka
```