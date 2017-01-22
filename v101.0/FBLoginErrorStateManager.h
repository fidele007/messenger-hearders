/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSString;

@interface FBLoginErrorStateManager : NSObject {

	unsigned long long _incorrectPasswordCount;
	NSError* _error;
	NSString* _correctLoginIdentifier;
	NSString* _errorURL;

}

@property (nonatomic,copy,readonly) NSString * correctLoginIdentifier;              //@synthesize correctLoginIdentifier=_correctLoginIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * errorURL;                            //@synthesize errorURL=_errorURL - In the implementation block
-(NSString *)errorURL;
-(void)clearIncorrectPasswordCount;
-(NSString *)correctLoginIdentifier;
-(void)_getFallbackLoginErrorStrings;
-(void)updateWithError:(id)arg1 ;
@end
