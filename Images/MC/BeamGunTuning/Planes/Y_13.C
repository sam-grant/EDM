void Y_13()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:26 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_13__29 = new TH1F("Y_13__29","Plane 13",100,-100,100);
   Y_13__29->SetBinContent(23,1);
   Y_13__29->SetBinContent(25,1);
   Y_13__29->SetBinContent(36,1);
   Y_13__29->SetBinContent(41,7);
   Y_13__29->SetBinContent(42,19);
   Y_13__29->SetBinContent(43,33);
   Y_13__29->SetBinContent(44,18);
   Y_13__29->SetBinContent(45,18);
   Y_13__29->SetBinContent(46,13);
   Y_13__29->SetBinContent(47,13);
   Y_13__29->SetBinContent(48,9);
   Y_13__29->SetBinContent(49,48);
   Y_13__29->SetBinContent(50,77);
   Y_13__29->SetBinContent(51,33);
   Y_13__29->SetBinContent(52,11);
   Y_13__29->SetBinContent(53,16);
   Y_13__29->SetBinContent(54,13);
   Y_13__29->SetBinContent(55,17);
   Y_13__29->SetBinContent(56,18);
   Y_13__29->SetBinContent(57,19);
   Y_13__29->SetBinContent(58,31);
   Y_13__29->SetBinContent(59,17);
   Y_13__29->SetBinContent(60,1);
   Y_13__29->SetBinContent(61,1);
   Y_13__29->SetBinContent(62,3);
   Y_13__29->SetBinContent(67,2);
   Y_13__29->SetBinContent(73,1);
   Y_13__29->SetEntries(441);
   Y_13__29->SetLineWidth(3);
   Y_13__29->GetXaxis()->SetTitle("Y [mm]");
   Y_13__29->GetXaxis()->CenterTitle(true);
   Y_13__29->GetXaxis()->SetLabelFont(42);
   Y_13__29->GetXaxis()->SetTitleSize(0.04);
   Y_13__29->GetXaxis()->SetTitleOffset(1.1);
   Y_13__29->GetXaxis()->SetTitleFont(42);
   Y_13__29->GetYaxis()->SetTitle("Ghost tracks");
   Y_13__29->GetYaxis()->CenterTitle(true);
   Y_13__29->GetYaxis()->SetNdivisions(4000510);
   Y_13__29->GetYaxis()->SetLabelFont(42);
   Y_13__29->GetYaxis()->SetTitleSize(0.04);
   Y_13__29->GetYaxis()->SetTitleOffset(1.1);
   Y_13__29->GetYaxis()->SetTitleFont(42);
   Y_13__29->GetZaxis()->SetLabelFont(42);
   Y_13__29->GetZaxis()->SetTitleOffset(1);
   Y_13__29->GetZaxis()->SetTitleFont(42);
   Y_13__29->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
