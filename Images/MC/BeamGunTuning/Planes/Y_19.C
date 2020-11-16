void Y_19()
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
   
   TH1F *Y_19__41 = new TH1F("Y_19__41","Plane 19",100,-100,100);
   Y_19__41->SetBinContent(37,1);
   Y_19__41->SetBinContent(41,7);
   Y_19__41->SetBinContent(42,16);
   Y_19__41->SetBinContent(43,36);
   Y_19__41->SetBinContent(44,19);
   Y_19__41->SetBinContent(45,12);
   Y_19__41->SetBinContent(46,15);
   Y_19__41->SetBinContent(47,16);
   Y_19__41->SetBinContent(48,11);
   Y_19__41->SetBinContent(49,41);
   Y_19__41->SetBinContent(50,76);
   Y_19__41->SetBinContent(51,41);
   Y_19__41->SetBinContent(52,10);
   Y_19__41->SetBinContent(53,12);
   Y_19__41->SetBinContent(54,13);
   Y_19__41->SetBinContent(55,15);
   Y_19__41->SetBinContent(56,15);
   Y_19__41->SetBinContent(57,21);
   Y_19__41->SetBinContent(58,28);
   Y_19__41->SetBinContent(59,23);
   Y_19__41->SetBinContent(65,1);
   Y_19__41->SetBinContent(66,1);
   Y_19__41->SetBinContent(67,1);
   Y_19__41->SetBinContent(71,1);
   Y_19__41->SetBinContent(74,1);
   Y_19__41->SetBinContent(77,1);
   Y_19__41->SetEntries(434);
   Y_19__41->SetLineWidth(3);
   Y_19__41->GetXaxis()->SetTitle("Y [mm]");
   Y_19__41->GetXaxis()->CenterTitle(true);
   Y_19__41->GetXaxis()->SetLabelFont(42);
   Y_19__41->GetXaxis()->SetTitleSize(0.04);
   Y_19__41->GetXaxis()->SetTitleOffset(1.1);
   Y_19__41->GetXaxis()->SetTitleFont(42);
   Y_19__41->GetYaxis()->SetTitle("Ghost tracks");
   Y_19__41->GetYaxis()->CenterTitle(true);
   Y_19__41->GetYaxis()->SetNdivisions(4000510);
   Y_19__41->GetYaxis()->SetLabelFont(42);
   Y_19__41->GetYaxis()->SetTitleSize(0.04);
   Y_19__41->GetYaxis()->SetTitleOffset(1.1);
   Y_19__41->GetYaxis()->SetTitleFont(42);
   Y_19__41->GetZaxis()->SetLabelFont(42);
   Y_19__41->GetZaxis()->SetTitleOffset(1);
   Y_19__41->GetZaxis()->SetTitleFont(42);
   Y_19__41->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
