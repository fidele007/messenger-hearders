/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSectionComponent.h>

@protocol NSObject;
@class NSArray;

@interface MNFlatListSectionComponent : FBSectionComponent {

	NSArray* _models;
	/*^block*/id _keyGenerator;
	/*^block*/id _itemComparator;
	id<NSObject> _context;
	/*^block*/id _componentProvider;

}
+(id)newWithModels:(id)arg1 keyGenerator:(/*^block*/id)arg2 context:(id)arg3 componentGenerator:(const FBSectionComponentGenerator*)arg4 ;
-(id)_toSectionComponentDataSourceModel:(id)arg1 ;
-(id)changesetFromPreviousComponent:(id)arg1 ;
-(id)changesetToRemoveAll;
-(long long)numberOfSections;
@end

