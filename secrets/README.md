# WunderSecrets
This is repository contains sensitive data for shared secrects in WunderTools

See [WunderTools](https://github.com/wunderkraut/WunderTools) for more.

## How to enable these secrets for my wundertools project
You need to add these lines into your `conf/project.yml`:
```
wundersecrets:
  remote: git@github.com:wunderio/WunderSecrets.git
```

## Encrypted variables in vault.yml
`vault.yml` contains encrypted shared secrets they are encrypted with the company default password.

Included variables:
* `newrelic_license_key` - For using new relic application monitoring
* `base_pubkeys_auth` - Authentication to ssh key server `key.wunder.io`

### How to decrypt vault.yml

1. Install lastpass cli from: https://github.com/lastpass/lastpass-cli
2. Login to lastpass with your email: `$ lpass login firstname.lastname@wunder.io`
3. Put this script into your home folder: `~/.ansible-pass-file`

```bash
#!/bin/sh
echo `lpass show Ansible\ vault\ pass --field=Secret\ access\ key`
```

4. Give execution permission for the script: `$ chmod +x ~/.ansible-pass-file`

5. When you run WunderTools you can provide vaultfile as a flag `-p ~/.ansible-pass-file`

For example:
```bash
$ ./provision.sh -p ~/.ansible-pass-file stage
```

## Notes
Don't share the information in this repository with anyone outside of this company

## Maintainers
[Onni Hakala](https://github.com/onnimonni)
