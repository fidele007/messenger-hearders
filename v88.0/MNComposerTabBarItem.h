/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNComposerExtensionIcon, NSURL;

@interface MNComposerTabBarItem : FBValueObject <NSCopying> {

	NSString* _extensionIdentifier;
	long long _category;
	MNComposerExtensionIcon* _icon;
	NSString* _name;
	NSString* _shortDescription;
	NSURL* _promotionImageURL;
	NSString* _accessibilityIdentifier;

}

@property (nonatomic,copy,readonly) NSString * extensionIdentifier;                  //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,readonly) long long category;                                   //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) MNComposerExtensionIcon * icon;                  //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortDescription;                     //@synthesize shortDescription=_shortDescription - In the implementation block
@property (nonatomic,copy,readonly) NSURL * promotionImageURL;                       //@synthesize promotionImageURL=_promotionImageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityIdentifier;              //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
-(id)initWithExtensionIdentifier:(id)arg1 category:(long long)arg2 icon:(id)arg3 name:(id)arg4 shortDescription:(id)arg5 promotionImageURL:(id)arg6 accessibilityIdentifier:(id)arg7 ;
-(NSURL *)promotionImageURL;
-(NSString *)extensionIdentifier;
-(NSString *)name;
-(long long)category;
-(NSString *)accessibilityIdentifier;
-(NSString *)shortDescription;
-(MNComposerExtensionIcon *)icon;
@end

