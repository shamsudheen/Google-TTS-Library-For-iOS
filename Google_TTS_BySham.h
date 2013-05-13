


/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 
                        * Google_TTS_BySham.h *
 
                         * Google_TTS_BySham *
 
                 * Created by Shamsudheen on 2/02/13 *
 
        * Copyright (c) 2013 Shamsudheen. All rights reserved *
 
                    * Customization of Google_TTS *
 
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface Google_TTS_BySham : NSObject<AVAudioPlayerDelegate>

#pragma mark --
#pragma mark Properties.

/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 
 *It represents the volume.
 *The nominal range is from 0.0 to 1.0.Default is 1.0
 
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
@property(nonatomic,assign)float volume; 

#pragma mark --
#pragma mark Methods.
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 
 Method is used to speak a given string.
 
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
- (void)speak:(NSString *)stringToSpeak;


@end
