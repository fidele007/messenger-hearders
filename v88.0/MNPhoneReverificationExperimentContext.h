/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface MNPhoneReverificationExperimentContext : FBExperimentContext {

	long long _promptFrequencyInHours;
	long long _maximumNumberOfPrompts;
	NSString* _phoneEntryViewTitle;
	NSString* _phoneEntryViewSubtitle;
	NSString* _phoneEntryViewButtonTitle;
	NSString* _phoneConfirmationViewTitle;
	NSString* _phoneConfirmationViewSuccessMessage;

}

@property (nonatomic,readonly) long long promptFrequencyInHours;                                 //@synthesize promptFrequencyInHours=_promptFrequencyInHours - In the implementation block
@property (nonatomic,readonly) long long maximumNumberOfPrompts;                                 //@synthesize maximumNumberOfPrompts=_maximumNumberOfPrompts - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneEntryViewTitle;                              //@synthesize phoneEntryViewTitle=_phoneEntryViewTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneEntryViewSubtitle;                           //@synthesize phoneEntryViewSubtitle=_phoneEntryViewSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneEntryViewButtonTitle;                        //@synthesize phoneEntryViewButtonTitle=_phoneEntryViewButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneConfirmationViewTitle;                       //@synthesize phoneConfirmationViewTitle=_phoneConfirmationViewTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneConfirmationViewSuccessMessage;              //@synthesize phoneConfirmationViewSuccessMessage=_phoneConfirmationViewSuccessMessage - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(long long)promptFrequencyInHours;
-(long long)maximumNumberOfPrompts;
-(NSString *)phoneEntryViewTitle;
-(NSString *)phoneEntryViewSubtitle;
-(NSString *)phoneEntryViewButtonTitle;
-(NSString *)phoneConfirmationViewTitle;
-(NSString *)phoneConfirmationViewSuccessMessage;
@end
