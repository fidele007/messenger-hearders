/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@class FBProviderMapData, MNThreadNavigationCoordinator, MNNewThreadNavigationCoordinator, NSString;

@interface MNThreadViewStatusManagerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNNewThreadNavigationCoordinator* _newThreadNavigationCoordinator;

}

@property (nonatomic,readonly) MNThreadNavigationCoordinator * threadNavigationCoordinator;                    //@synthesize threadNavigationCoordinator=_threadNavigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNNewThreadNavigationCoordinator * newThreadNavigationCoordinator;              //@synthesize newThreadNavigationCoordinator=_newThreadNavigationCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNThreadNavigationCoordinator *)threadNavigationCoordinator;
-(MNNewThreadNavigationCoordinator *)newThreadNavigationCoordinator;
@end
