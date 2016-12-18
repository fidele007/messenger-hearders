/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, MNMessageLiveLocationTrayMapViewSendingState, NSSet;

@interface MNMessageLiveLocationTrayMapViewModel : FBValueObject <NSCopying, NSCoding> {

	NSString* _viewerId;
	MNMessageLiveLocationTrayMapViewSendingState* _sendingState;
	NSSet* _nonViewerLiveLocations;
	NSSet* _staleMessageLiveLocationIds;

}

@property (nonatomic,copy,readonly) NSString * viewerId;                                                      //@synthesize viewerId=_viewerId - In the implementation block
@property (nonatomic,copy,readonly) MNMessageLiveLocationTrayMapViewSendingState * sendingState;              //@synthesize sendingState=_sendingState - In the implementation block
@property (nonatomic,copy,readonly) NSSet * nonViewerLiveLocations;                                           //@synthesize nonViewerLiveLocations=_nonViewerLiveLocations - In the implementation block
@property (nonatomic,copy,readonly) NSSet * staleMessageLiveLocationIds;                                      //@synthesize staleMessageLiveLocationIds=_staleMessageLiveLocationIds - In the implementation block
-(NSString *)viewerId;
-(NSSet *)nonViewerLiveLocations;
-(NSSet *)staleMessageLiveLocationIds;
-(MNMessageLiveLocationTrayMapViewSendingState *)sendingState;
-(id)initWithViewerId:(id)arg1 sendingState:(id)arg2 nonViewerLiveLocations:(id)arg3 staleMessageLiveLocationIds:(id)arg4 ;
@end
