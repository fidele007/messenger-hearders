/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBMediaPickerVideoImprovementsExperimentContext : FBExperimentContext {

	BOOL _autoplayOnSelection;
	BOOL _autoplayOnAppearance;
	BOOL _autoplayInSouvenirsPicker;
	BOOL _fnfEnabled;
	BOOL _fnfMemoryOptEnabled;
	BOOL _playWhileScrolling;
	long long _autoplayCapacityLowEnd;
	long long _autoplayCapacityHighEnd;

}

@property (nonatomic,readonly) BOOL autoplayOnSelection;                       //@synthesize autoplayOnSelection=_autoplayOnSelection - In the implementation block
@property (nonatomic,readonly) BOOL autoplayOnAppearance;                      //@synthesize autoplayOnAppearance=_autoplayOnAppearance - In the implementation block
@property (nonatomic,readonly) long long autoplayCapacityLowEnd;               //@synthesize autoplayCapacityLowEnd=_autoplayCapacityLowEnd - In the implementation block
@property (nonatomic,readonly) long long autoplayCapacityHighEnd;              //@synthesize autoplayCapacityHighEnd=_autoplayCapacityHighEnd - In the implementation block
@property (nonatomic,readonly) BOOL autoplayInSouvenirsPicker;                 //@synthesize autoplayInSouvenirsPicker=_autoplayInSouvenirsPicker - In the implementation block
@property (nonatomic,readonly) BOOL fnfEnabled;                                //@synthesize fnfEnabled=_fnfEnabled - In the implementation block
@property (nonatomic,readonly) BOOL fnfMemoryOptEnabled;                       //@synthesize fnfMemoryOptEnabled=_fnfMemoryOptEnabled - In the implementation block
@property (nonatomic,readonly) BOOL playWhileScrolling;                        //@synthesize playWhileScrolling=_playWhileScrolling - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(long long)autoplayCapacityHighEnd;
-(long long)autoplayCapacityLowEnd;
-(BOOL)autoplayInSouvenirsPicker;
-(BOOL)autoplayOnAppearance;
-(BOOL)autoplayOnSelection;
-(BOOL)fnfEnabled;
-(BOOL)fnfMemoryOptEnabled;
-(BOOL)playWhileScrolling;
@end

