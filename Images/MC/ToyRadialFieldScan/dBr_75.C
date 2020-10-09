void dBr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 09:35:36 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__5 = new TH1D("__5","Number of sub-runs: 75",300,0,3);
   __5->SetBinContent(85,1);
   __5->SetBinContent(86,2);
   __5->SetBinContent(87,7);
   __5->SetBinContent(88,12);
   __5->SetBinContent(89,13);
   __5->SetBinContent(90,23);
   __5->SetBinContent(91,46);
   __5->SetBinContent(92,61);
   __5->SetBinContent(93,75);
   __5->SetBinContent(94,91);
   __5->SetBinContent(95,93);
   __5->SetBinContent(96,109);
   __5->SetBinContent(97,90);
   __5->SetBinContent(98,91);
   __5->SetBinContent(99,68);
   __5->SetBinContent(100,63);
   __5->SetBinContent(101,41);
   __5->SetBinContent(102,38);
   __5->SetBinContent(103,33);
   __5->SetBinContent(104,17);
   __5->SetBinContent(105,8);
   __5->SetBinContent(106,7);
   __5->SetBinContent(107,6);
   __5->SetBinContent(108,3);
   __5->SetBinContent(109,1);
   __5->SetBinContent(110,1);
   __5->SetEntries(1000);
   __5->SetLineWidth(3);
   __5->GetXaxis()->SetTitle("Background #deltaB_{r} [ppm]");
   __5->GetXaxis()->CenterTitle(true);
   __5->GetXaxis()->SetLabelFont(42);
   __5->GetXaxis()->SetTitleSize(0.04);
   __5->GetXaxis()->SetTitleOffset(1.1);
   __5->GetXaxis()->SetTitleFont(42);
   __5->GetYaxis()->SetTitle("Experiments");
   __5->GetYaxis()->CenterTitle(true);
   __5->GetYaxis()->SetNdivisions(4000510);
   __5->GetYaxis()->SetLabelFont(42);
   __5->GetYaxis()->SetTitleSize(0.04);
   __5->GetYaxis()->SetTitleOffset(1.1);
   __5->GetYaxis()->SetTitleFont(42);
   __5->GetZaxis()->SetLabelFont(42);
   __5->GetZaxis()->SetTitleOffset(1);
   __5->GetZaxis()->SetTitleFont(42);
   __5->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
