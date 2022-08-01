#
# Be sure to run `pod lib lint CltDaLibForOS.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'CltDaLibForOS'
  s.version          = '2'
  s.summary          = 'CltDaLibForOS.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/RMTelephone/CltDaLibForOS'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'jgyhc' => 'jgyhc@foxmail.com' }
  s.source           = { :git => 'https://github.com/RMTelephone/CltDaLibForOS.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  s.static_framework = true
  #s.source_files = 'CltDaLibForOS/Classes/**/*'
  
  # s.resource_bundles = {
  #   'CltDaLibForOS' => ['CltDaLibForOS/Assets/*.png']
  # }
  s.pod_target_xcconfig = { 'VALID_ARCHS' => 'armv7 arm64', 'ENABLE_BITCODE' => 'NO' }
  s.vendored_frameworks = 'CltDaLibForOS/Framework/*.framework'
  s.libraries = "z.1.2.5","iconv.2.4.0"
  #,"c++abi","c++.1","c++"
  s.frameworks = 'Foundation'
  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
   s.dependency 'mvspsdk'
   s.dependency 'OpenSSL-Universal'
end
