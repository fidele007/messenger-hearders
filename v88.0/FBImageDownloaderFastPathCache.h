/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMapTable;

@interface FBImageDownloaderFastPathCache : NSObject {

	NSMapTable* _table;
	mutex _lock;

}
-(id)cachedImageForURL:(id)arg1 ;
-(void)setCachedImage:(id)arg1 forURL:(id)arg2 ;
-(id)init;
-(void)clear;
@end

