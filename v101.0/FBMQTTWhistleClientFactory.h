/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMQTTClientFactory.h>

@protocol OS_dispatch_queue;
@class FBWhistleAdaptorFactory, FBMQTTClientSettings, FBWhistleCellRadioChangeMonitor, FBMQTTClientByteAggregator, NSObject, NSString;

@interface FBMQTTWhistleClientFactory : NSObject <FBMQTTClientFactory> {

	FBWhistleAdaptorFactory* _whistleFactory;
	FBMQTTClientSettings* _clientSettings;
	FBWhistleCellRadioChangeMonitor* _whistleCellRadioMonitor;
	FBMQTTClientByteAggregator* _byteAggregator;
	/*^block*/id _analyticsLogBlock;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnalyticsLogBlock:(/*^block*/id)arg1 ;
-(void)resetFactory;
-(void)configureWithSettings:(id)arg1 queue:(id)arg2 ;
-(id)makeClientWithParameter:(id)arg1 ;
-(void)onSettingsChanged:(id)arg1 ;
-(void)onNetworkStatusChanged;
@end

