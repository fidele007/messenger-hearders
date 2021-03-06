/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBViewModelAdapterToolbox;
#import <Messenger/Messenger-Structs.h>
@class NSMutableArray;

@interface FBViewModelAdapterRegistry : NSObject {

	/*^block*/id _adapterClassCondition;
	/*^block*/id _config_block_for_adapters;
	NSMutableArray* _adapterClasses;
	mutex _adapterLock;
	id<FBViewModelAdapterToolbox> _toolbox;

}
-(id)initWithAdapterClassCondition:(/*^block*/id)arg1 configurationBlockForAdapters:(/*^block*/id)arg2 toolbox:(id)arg3 ;
-(void)addAdapterClass:(Class)arg1 ;
-(id)adapterForDataModel:(id)arg1 ;
-(id)init;
@end

