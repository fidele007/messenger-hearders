/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NBAsYouTypeFormatter;

@interface FBAsYouTypeFormatter : NSObject {

	NBAsYouTypeFormatter* _internalFormatter;

}

@property (nonatomic,retain) NBAsYouTypeFormatter * internalFormatter;              //@synthesize internalFormatter=_internalFormatter - In the implementation block
-(id)initWithRegionCode:(id)arg1 ;
-(id)formatInput:(id)arg1 ;
-(id)initWithRegionCode:(id)arg1 asYouTypeFormatter:(id)arg2 ;
-(void)setInternalFormatter:(NBAsYouTypeFormatter *)arg1 ;
-(NBAsYouTypeFormatter *)internalFormatter;
@end
