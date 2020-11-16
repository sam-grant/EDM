void Y_18()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:27 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_18__39 = new TH1F("Y_18__39","Plane 18",100,-100,100);
   Y_18__39->SetBinContent(38,1);
   Y_18__39->SetBinContent(41,8);
   Y_18__39->SetBinContent(42,18);
   Y_18__39->SetBinContent(43,33);
   Y_18__39->SetBinContent(44,20);
   Y_18__39->SetBinContent(45,12);
   Y_18__39->SetBinContent(46,17);
   Y_18__39->SetBinContent(47,13);
   Y_18__39->SetBinContent(48,11);
   Y_18__39->SetBinContent(49,44);
   Y_18__39->SetBinContent(50,74);
   Y_18__39->SetBinContent(51,41);
   Y_18__39->SetBinContent(52,10);
   Y_18__39->SetBinContent(53,11);
   Y_18__39->SetBinContent(54,15);
   Y_18__39->SetBinContent(55,15);
   Y_18__39->SetBinContent(56,13);
   Y_18__39->SetBinContent(57,21);
   Y_18__39->SetBinContent(58,27);
   Y_18__39->SetBinContent(59,24);
   Y_18__39->SetBinContent(65,1);
   Y_18__39->SetBinContent(66,2);
   Y_18__39->SetBinContent(70,1);
   Y_18__39->SetBinContent(74,1);
   Y_18__39->SetBinContent(75,1);
   Y_18__39->SetBinContent(78,1);
   Y_18__39->SetEntries(435);
   Y_18__39->SetLineWidth(3);
   Y_18__39->GetXaxis()->SetTitle("Y [mm]");
   Y_18__39->GetXaxis()->CenterTitle(true);
   Y_18__39->GetXaxis()->SetLabelFont(42);
   Y_18__39->GetXaxis()->SetTitleSize(0.04);
   Y_18__39->GetXaxis()->SetTitleOffset(1.1);
   Y_18__39->GetXaxis()->SetTitleFont(42);
   Y_18__39->GetYaxis()->SetTitle("Ghost tracks");
   Y_18__39->GetYaxis()->CenterTitle(true);
   Y_18__39->GetYaxis()->SetNdivisions(4000510);
   Y_18__39->GetYaxis()->SetLabelFont(42);
   Y_18__39->GetYaxis()->SetTitleSize(0.04);
   Y_18__39->GetYaxis()->SetTitleOffset(1.1);
   Y_18__39->GetYaxis()->SetTitleFont(42);
   Y_18__39->GetZaxis()->SetLabelFont(42);
   Y_18__39->GetZaxis()->SetTitleOffset(1);
   Y_18__39->GetZaxis()->SetTitleFont(42);
   Y_18__39->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
