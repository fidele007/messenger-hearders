/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDictionary;

@interface MNViewModelUpdateType : NSObject <NSCopying> {

	unsigned long long _subtype;
	id _reload_existingViewModel;
	id _additionalPage_existingViewModel;
	long long _additionalPage_numberOfAdditionalElementsToRequest;
	id _reloadWithAdditionalPage_existingViewModel;
	long long _reloadWithAdditionalPage_numberOfAdditionalElementsToRequest;
	id _incremental_existingViewModel;
	NSSet* _incremental_keysToUpdate;
	NSDictionary* _incremental_cachedChildElements;

}
+(id)additionalPageWithExistingViewModel:(id)arg1 numberOfAdditionalElementsToRequest:(long long)arg2 ;
+(id)incrementalWithExistingViewModel:(id)arg1 keysToUpdate:(id)arg2 cachedChildElements:(id)arg3 ;
+(id)reloadWithAdditionalPageWithExistingViewModel:(id)arg1 numberOfAdditionalElementsToRequest:(long long)arg2 ;
+(id)reloadWithExistingViewModel:(id)arg1 ;
-(void)matchReload:(/*^block*/id)arg1 additionalPage:(/*^block*/id)arg2 reloadWithAdditionalPage:(/*^block*/id)arg3 incremental:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

