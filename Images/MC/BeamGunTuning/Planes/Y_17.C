void Y_17()
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
   
   TH1F *Y_17__37 = new TH1F("Y_17__37","Plane 17",100,-100,100);
   Y_17__37->SetBinContent(39,1);
   Y_17__37->SetBinContent(41,9);
   Y_17__37->SetBinContent(42,20);
   Y_17__37->SetBinContent(43,30);
   Y_17__37->SetBinContent(44,20);
   Y_17__37->SetBinContent(45,15);
   Y_17__37->SetBinContent(46,13);
   Y_17__37->SetBinContent(47,13);
   Y_17__37->SetBinContent(48,12);
   Y_17__37->SetBinContent(49,43);
   Y_17__37->SetBinContent(50,78);
   Y_17__37->SetBinContent(51,37);
   Y_17__37->SetBinContent(52,11);
   Y_17__37->SetBinContent(53,10);
   Y_17__37->SetBinContent(54,15);
   Y_17__37->SetBinContent(55,14);
   Y_17__37->SetBinContent(56,15);
   Y_17__37->SetBinContent(57,21);
   Y_17__37->SetBinContent(58,30);
   Y_17__37->SetBinContent(59,21);
   Y_17__37->SetBinContent(64,1);
   Y_17__37->SetBinContent(65,1);
   Y_17__37->SetBinContent(66,1);
   Y_17__37->SetBinContent(70,1);
   Y_17__37->SetBinContent(73,3);
   Y_17__37->SetEntries(435);
   Y_17__37->SetLineWidth(3);
   Y_17__37->GetXaxis()->SetTitle("Y [mm]");
   Y_17__37->GetXaxis()->CenterTitle(true);
   Y_17__37->GetXaxis()->SetLabelFont(42);
   Y_17__37->GetXaxis()->SetTitleSize(0.04);
   Y_17__37->GetXaxis()->SetTitleOffset(1.1);
   Y_17__37->GetXaxis()->SetTitleFont(42);
   Y_17__37->GetYaxis()->SetTitle("Ghost tracks");
   Y_17__37->GetYaxis()->CenterTitle(true);
   Y_17__37->GetYaxis()->SetNdivisions(4000510);
   Y_17__37->GetYaxis()->SetLabelFont(42);
   Y_17__37->GetYaxis()->SetTitleSize(0.04);
   Y_17__37->GetYaxis()->SetTitleOffset(1.1);
   Y_17__37->GetYaxis()->SetTitleFont(42);
   Y_17__37->GetZaxis()->SetLabelFont(42);
   Y_17__37->GetZaxis()->SetTitleOffset(1);
   Y_17__37->GetZaxis()->SetTitleFont(42);
   Y_17__37->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
