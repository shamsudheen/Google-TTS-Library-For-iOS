Google-TTS-Library-For-iOS
==========================

The Google TTS For iOS will provide the capability to write Text-To-Speech iOS applications using Google TTS services.

*Application Features:*

1. No limitation for characters where Google TTS only limited to 100 characters.
2. This is English only for now.Spanish and Arabic are coming soon.


*How To use:*

1.Clone git repository or download a ZIP archive (and unzip).
2. Find the downloaded files , add libGoogle_TTS_ByShamsu_Universal.a & Google_TTS_BySham.h  into your project.
3.Import  "Google_TTS_BySham.h" in to your class file.#import "Google_TTS_BySham.h"
4.Add AVFoundation.framework in to your project.
5.Build your Project.

*Sample Code:*

 `@property (nonatomic,strong)Google_TTS_BySham *google_TTS_BySham;`

~~~
 self.google_TTS_BySham = [[Google_TTS_BySham alloc] init];
 [self.google_TTS_BySham speak:@"This is a Google TTS for iOS By Sham"];
~~~