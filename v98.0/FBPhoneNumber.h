/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBPhoneNumber <NSObject>
@property (nonatomic,copy,readonly) NSString * isoCountryCode; 
@property (nonatomic,readonly) int callingCode; 
@required
-(id)rawInput;
-(id)formatWithStyle:(int)arg1;
-(id)formatForCallingFromCountry:(id)arg1;
-(id)asTelUrl;
-(int)callingCode;
-(BOOL)isPossible;
-(BOOL)isValid;
-(NSString *)isoCountryCode;

@end

