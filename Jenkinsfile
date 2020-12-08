pipeline {
	agent any

	stages {
		stage("Checkout") {
			steps {
				echo "*** This is Checkout stage, trying for ${env.BRANCH_NAME} ***"
				checkout(scm: [$class: 'GitSCM',
						branches: [[name: "*/${env.BRANCH_NAME}"]],
						doGenerateSubmoduleConfigurations: false,
						userRemoteConfigs: [[credentialsId: '73ead8d4-9681-47f6-ada2-a9e0e87c7b8b',
							url: 'https://github.com/JoshS80/js-git-demo2.git']]])
			}
		}
		stage("Hello") {
			steps {
				echo "The branch this job is building: ${env.BRANCH_NAME}, build number: ${env.BUILD_NUMBER}"
			}
		}
	}
}
