/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemTextWithEntities;

@interface MNOmniMNuxFooterCellViewModel : FBValueObject <NSCoding, NSCopying> {

	FBMemTextWithEntities* _text;

}

@property (nonatomic,copy,readonly) FBMemTextWithEntities * text;              //@synthesize text=_text - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(FBMemTextWithEntities *)text;
-(id)initWithText:(id)arg1 ;
@end

