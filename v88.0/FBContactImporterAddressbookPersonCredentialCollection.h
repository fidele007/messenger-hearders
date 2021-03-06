/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBContactImporterAddressbookPersonCredential;
@class NSArray;

@interface FBContactImporterAddressbookPersonCredentialCollection : NSObject {

	id<FBContactImporterAddressbookPersonCredential> _primary;
	NSArray* _credentials;

}

@property (nonatomic,readonly) id<FBContactImporterAddressbookPersonCredential> primary;              //@synthesize primary=_primary - In the implementation block
@property (nonatomic,readonly) NSArray * credentials;                                                 //@synthesize credentials=_credentials - In the implementation block
-(id)initPhonesWithABRecord:(void*)arg1 ;
-(id)initEmailsWithABRecord:(void*)arg1 ;
-(id)_initCommonWithABRecord:(void*)arg1 usingProperty:(int)arg2 ;
-(void)_copyCredentialsFromRecord:(void*)arg1 byProperty:(int)arg2 ;
-(void)addCredential:(id)arg1 ;
-(id)valuesAsStrings;
-(id)labelValuesAsStrings;
-(long long)count;
-(id)init;
-(id)description;
-(id<FBContactImporterAddressbookPersonCredential>)primary;
-(NSArray *)credentials;
@end

