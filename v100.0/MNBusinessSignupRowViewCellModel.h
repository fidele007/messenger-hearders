/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSAttributedString;

@interface MNBusinessSignupRowViewCellModel : FBValueObject <NSCopying> {

	BOOL _isFilled;
	unsigned long long _type;
	NSString* _imageName;
	NSString* _title;
	NSAttributedString* _text;
	NSString* _notFilledErrorText;

}

@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageName;                       //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL isFilled;                                   //@synthesize isFilled=_isFilled - In the implementation block
@property (nonatomic,copy,readonly) NSString * notFilledErrorText;              //@synthesize notFilledErrorText=_notFilledErrorText - In the implementation block
-(id)initWithType:(unsigned long long)arg1 imageName:(id)arg2 title:(id)arg3 text:(id)arg4 isFilled:(BOOL)arg5 notFilledErrorText:(id)arg6 ;
-(NSString *)notFilledErrorText;
-(unsigned long long)type;
-(NSString *)title;
-(NSAttributedString *)text;
-(BOOL)isFilled;
-(NSString *)imageName;
@end

