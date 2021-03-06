/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@class FBProviderMapData, MNBusinessCTAShareHandler, NSString;

@interface MNBusinessShareIntentHandlerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	MNBusinessCTAShareHandler* _businessCTAShareHandler;

}

@property (nonatomic,readonly) MNBusinessCTAShareHandler * businessCTAShareHandler;              //@synthesize businessCTAShareHandler=_businessCTAShareHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNBusinessCTAShareHandler *)businessCTAShareHandler;
@end

