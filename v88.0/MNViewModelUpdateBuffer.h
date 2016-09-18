/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MNViewModelUpdateBuffer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _keyToUpdateMap;

}
-(void)setUpdateWithMerging:(id)arg1 ;
-(id)allUpdates;
-(void)clearAllUpdates;
-(void)clearUpdateForKey:(id)arg1 ;
-(id)updateForKey:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)setUpdate:(id)arg1 ;
@end
