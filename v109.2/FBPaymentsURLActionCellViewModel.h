/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBPaymentsURLActionCellViewModel : FBValueObject <NSCopying> {

	NSString* _rowTitle;
	NSString* _accessibilityHint;
	NSURL* _actionURL;

}

@property (nonatomic,copy,readonly) NSString * rowTitle;                       //@synthesize rowTitle=_rowTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityHint;              //@synthesize accessibilityHint=_accessibilityHint - In the implementation block
@property (nonatomic,copy,readonly) NSURL * actionURL;                         //@synthesize actionURL=_actionURL - In the implementation block
-(NSString *)rowTitle;
-(id)initWithRowTitle:(id)arg1 accessibilityHint:(id)arg2 actionURL:(id)arg3 ;
-(NSURL *)actionURL;
-(NSString *)accessibilityHint;
@end

