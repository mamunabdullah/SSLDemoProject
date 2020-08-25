//
//  ViewController.swift
//  SSLDemoProject
//
//  Created by Abdullah Al Mamun on 24/8/20.
//  Copyright © 2020 Abdullah Al Mamun. All rights reserved.
//

import UIKit
import SSLCommerz

class ViewController: UIViewController,SSLCommerzDelegate {
    
    func transactionCompleted(withTransactionData transactionData: TransactionDetails?){
        
    }
    
    var sslCom: SSLCommerz?

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    @IBAction func sdkInitAction(_ sender: Any) {
        
        sslCom = SSLCommerz.init(integrationInformation: .init(storeID: "asdf", storePassword: "32423", totalAmount: 10.00, currency: "BDT", transactionId: "2343", productCategory: "asd"), emiInformation: nil, customerInformation: .init(customerName: "doe", customerEmail: "ss@ss.com", customerAddressOne: "one", customerCity: "two", customerPostCode: "111", customerCountry: "BD", customerPhone: "00000"), shipmentInformation: nil, productInformation: nil, additionalInformation: nil)
        
        sslCom?.delegate = self
        sslCom?.start(in : self, shouldRunInTestMode: true)
    }
    
}

