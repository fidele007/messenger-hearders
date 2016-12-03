/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class FBMobileConfigContextManager, NSString;

@interface MNMediaFiltersConfiguration : NSObject <FBViewerContextClassProvidable> {

	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)isGraphicsEngineSupportEnabledShouldLogExposure:(BOOL)arg1 ;
-(BOOL)areFiltersEnabledShouldLogExposure:(BOOL)arg1 ;
-(BOOL)isStyleTransfers720PEnabled;
-(BOOL)areFiltersEnabled;
-(BOOL)areMSQRDMaskEffectsEnabled;
-(BOOL)areShaderEffectsEnabled;
-(BOOL)areStyleTransferEffectsEnabled;
-(BOOL)areParticleEffectsEnabled;
-(BOOL)_boolValueForParam:(unsigned long long)arg1 shouldLogExposure:(BOOL)arg2 ;
-(BOOL)areMSQRDMaskEffectsEnabledShouldLogExposure:(BOOL)arg1 ;
-(BOOL)areStyleTransferEffectsEnabledShouldLogExposure:(BOOL)arg1 ;
-(BOOL)areShaderEffectsEnabledShouldLogExposure:(BOOL)arg1 ;
-(BOOL)areParticleEffectsEnabledShouldLogExposure:(BOOL)arg1 ;
-(BOOL)isGraphicsEngineSupportEnabled;
@end
