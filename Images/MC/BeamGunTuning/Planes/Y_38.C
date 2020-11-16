void Y_38()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_38__79 = new TH1F("Y_38__79","Plane 38",100,-100,100);
   Y_38__79->SetBinContent(37,1);
   Y_38__79->SetBinContent(41,5);
   Y_38__79->SetBinContent(42,11);
   Y_38__79->SetBinContent(43,32);
   Y_38__79->SetBinContent(44,21);
   Y_38__79->SetBinContent(45,16);
   Y_38__79->SetBinContent(46,16);
   Y_38__79->SetBinContent(47,16);
   Y_38__79->SetBinContent(48,12);
   Y_38__79->SetBinContent(49,33);
   Y_38__79->SetBinContent(50,78);
   Y_38__79->SetBinContent(51,42);
   Y_38__79->SetBinContent(52,14);
   Y_38__79->SetBinContent(53,13);
   Y_38__79->SetBinContent(54,11);
   Y_38__79->SetBinContent(55,13);
   Y_38__79->SetBinContent(56,16);
   Y_38__79->SetBinContent(57,16);
   Y_38__79->SetBinContent(58,27);
   Y_38__79->SetBinContent(59,30);
   Y_38__79->SetBinContent(61,1);
   Y_38__79->SetBinContent(63,1);
   Y_38__79->SetBinContent(70,1);
   Y_38__79->SetEntries(426);
   Y_38__79->SetLineWidth(3);
   Y_38__79->GetXaxis()->SetTitle("Y [mm]");
   Y_38__79->GetXaxis()->CenterTitle(true);
   Y_38__79->GetXaxis()->SetLabelFont(42);
   Y_38__79->GetXaxis()->SetTitleSize(0.04);
   Y_38__79->GetXaxis()->SetTitleOffset(1.1);
   Y_38__79->GetXaxis()->SetTitleFont(42);
   Y_38__79->GetYaxis()->SetTitle("Ghost tracks");
   Y_38__79->GetYaxis()->CenterTitle(true);
   Y_38__79->GetYaxis()->SetNdivisions(4000510);
   Y_38__79->GetYaxis()->SetLabelFont(42);
   Y_38__79->GetYaxis()->SetTitleSize(0.04);
   Y_38__79->GetYaxis()->SetTitleOffset(1.1);
   Y_38__79->GetYaxis()->SetTitleFont(42);
   Y_38__79->GetZaxis()->SetLabelFont(42);
   Y_38__79->GetZaxis()->SetTitleOffset(1);
   Y_38__79->GetZaxis()->SetTitleFont(42);
   Y_38__79->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
