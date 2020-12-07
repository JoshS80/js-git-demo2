pipeline {
	agent any

	stages {
		stage("Hello") {
			steps {
				echo "The branch this job is building: ${env.BRANCH_NAME}, build number: ${env.BUILD_NUMBER}"
			}
		}
	}
}
