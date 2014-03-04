//
//  MyProjectView.h
//  US2FormValidator
//
//  Copyright (C) ustwo™
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
//  of the Software, and to permit persons to whom the Software is furnished to do
//  so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//  

//
//  A simple test view containing sample validator text fields.
//  The kind validator of validator is set in the controller. 
//

#import <Foundation/Foundation.h>

@class MyProjectTextField;
@class MyProjectButton;


@interface MyProjectView : UIView

@property (nonatomic, weak) IBOutlet UIScrollView *scrollView;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *keyboardConstraint;
@property (nonatomic, weak) IBOutlet UIView *containerView;

@property (nonatomic, strong) MyProjectTextField *aboutTextField;
@property (nonatomic, strong) UILabel *aboutErrorLabel;
@property (nonatomic, strong) MyProjectTextField *emailTextField;
@property (nonatomic, strong) UILabel *emailErrorLabel;
@property (nonatomic, strong) MyProjectTextField *ukPostcodeTextField;
@property (nonatomic, strong) UILabel *ukPostcodeErrorLabel;
@property (nonatomic, strong) MyProjectTextField *visaCreditCardTextField;
@property (nonatomic, strong) UILabel *visaCreditCardErrorLabel;
@property (nonatomic, strong) MyProjectButton *submitButton;

@end