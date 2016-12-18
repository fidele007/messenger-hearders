/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MNViewModelCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _keyToViewModelElementMap;
	NSMutableDictionary* _keyToChildElementsMap;

}
-(id)viewModelElementForKey:(id)arg1 ;
-(void)updateChildElements:(id)arg1 forViewModelElementKey:(id)arg2 ;
-(id)childElementsForViewModelElementKey:(id)arg1 ;
-(void)invalidateChildElementsWithKeys:(id)arg1 forViewModelElementKey:(id)arg2 ;
-(void)updateViewModelElement:(id)arg1 ;
-(void)_addChildElements:(id)arg1 forViewModelElementKey:(id)arg2 ;
-(void)_removeChildElementsWithKeys:(id)arg1 forViewModelElementKey:(id)arg2 ;
-(void)_clearChildElementsForViewModelElementKey:(id)arg1 ;
-(void)invalidateAllChildElementsForViewModelElementKey:(id)arg1 ;
-(void)invalidateViewModelElementForKey:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
@end

