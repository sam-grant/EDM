void Y_14()
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
   
   TH1F *Y_14__31 = new TH1F("Y_14__31","Plane 14",100,-100,100);
   Y_14__31->SetBinContent(25,1);
   Y_14__31->SetBinContent(33,1);
   Y_14__31->SetBinContent(41,6);
   Y_14__31->SetBinContent(42,23);
   Y_14__31->SetBinContent(43,30);
   Y_14__31->SetBinContent(44,18);
   Y_14__31->SetBinContent(45,19);
   Y_14__31->SetBinContent(46,12);
   Y_14__31->SetBinContent(47,12);
   Y_14__31->SetBinContent(48,13);
   Y_14__31->SetBinContent(49,45);
   Y_14__31->SetBinContent(50,77);
   Y_14__31->SetBinContent(51,32);
   Y_14__31->SetBinContent(52,14);
   Y_14__31->SetBinContent(53,13);
   Y_14__31->SetBinContent(54,13);
   Y_14__31->SetBinContent(55,18);
   Y_14__31->SetBinContent(56,16);
   Y_14__31->SetBinContent(57,18);
   Y_14__31->SetBinContent(58,32);
   Y_14__31->SetBinContent(59,18);
   Y_14__31->SetBinContent(62,1);
   Y_14__31->SetBinContent(63,2);
   Y_14__31->SetBinContent(65,1);
   Y_14__31->SetBinContent(67,2);
   Y_14__31->SetBinContent(73,1);
   Y_14__31->SetEntries(438);
   Y_14__31->SetLineWidth(3);
   Y_14__31->GetXaxis()->SetTitle("Y [mm]");
   Y_14__31->GetXaxis()->CenterTitle(true);
   Y_14__31->GetXaxis()->SetLabelFont(42);
   Y_14__31->GetXaxis()->SetTitleSize(0.04);
   Y_14__31->GetXaxis()->SetTitleOffset(1.1);
   Y_14__31->GetXaxis()->SetTitleFont(42);
   Y_14__31->GetYaxis()->SetTitle("Ghost tracks");
   Y_14__31->GetYaxis()->CenterTitle(true);
   Y_14__31->GetYaxis()->SetNdivisions(4000510);
   Y_14__31->GetYaxis()->SetLabelFont(42);
   Y_14__31->GetYaxis()->SetTitleSize(0.04);
   Y_14__31->GetYaxis()->SetTitleOffset(1.1);
   Y_14__31->GetYaxis()->SetTitleFont(42);
   Y_14__31->GetZaxis()->SetLabelFont(42);
   Y_14__31->GetZaxis()->SetTitleOffset(1);
   Y_14__31->GetZaxis()->SetTitleFont(42);
   Y_14__31->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
