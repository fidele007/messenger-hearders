/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary;

@interface FBObjectGraphConfiguration : NSObject {

	BOOL _shouldInspectTimers;
	BOOL _shouldCacheLayouts;
	NSArray* _filterBlocks;
	NSMutableDictionary* _layoutCache;

}

@property (nonatomic,copy,readonly) NSArray * filterBlocks;                    //@synthesize filterBlocks=_filterBlocks - In the implementation block
@property (nonatomic,readonly) BOOL shouldInspectTimers;                       //@synthesize shouldInspectTimers=_shouldInspectTimers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * layoutCache;              //@synthesize layoutCache=_layoutCache - In the implementation block
@property (nonatomic,readonly) BOOL shouldCacheLayouts;                        //@synthesize shouldCacheLayouts=_shouldCacheLayouts - In the implementation block
-(id)initWithFilterBlocks:(id)arg1 shouldInspectTimers:(BOOL)arg2 ;
-(NSArray *)filterBlocks;
-(BOOL)shouldInspectTimers;
-(BOOL)shouldCacheLayouts;
-(id)init;
-(NSMutableDictionary *)layoutCache;
@end

