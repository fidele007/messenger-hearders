/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSBundle, NSMapTable;

@interface FBImageLoader : NSObject {

	NSBundle* _bundle;
	NSMapTable* _cachedImages;
	mutex _cachedImagesMutex;

}
+(id)imageLoaderForClass:(Class)arg1 ;
-(id)optionalImageNamed:(id)arg1 ;
-(id)_loadImageNamed:(id)arg1 ;
-(id)_downscaleToDevice:(id)arg1 name:(id)arg2 ;
-(id)description;
-(id)imageNamed:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
@end
