/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBRapidReportingContainerState : FBValueObject <NSCopying> {

	BOOL _isSubmitted;
	BOOL _highlightWarning;

}

@property (nonatomic,readonly) BOOL isSubmitted;                   //@synthesize isSubmitted=_isSubmitted - In the implementation block
@property (nonatomic,readonly) BOOL highlightWarning;              //@synthesize highlightWarning=_highlightWarning - In the implementation block
-(id)initWithIsSubmitted:(BOOL)arg1 highlightWarning:(BOOL)arg2 ;
-(BOOL)isSubmitted;
-(BOOL)highlightWarning;
@end
