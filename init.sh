#!/bin/bash
rm -rf www
drush make test_dev/build.make www
