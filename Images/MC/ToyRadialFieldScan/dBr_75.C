void dBr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct  8 17:32:44 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__5 = new TH1D("__5","Number of sub-runs: 75",300,0,3);
   __5->SetBinContent(0,501);
   __5->SetBinContent(85,1);
   __5->SetBinContent(86,1);
   __5->SetBinContent(87,2);
   __5->SetBinContent(88,5);
   __5->SetBinContent(89,5);
   __5->SetBinContent(90,11);
   __5->SetBinContent(91,16);
   __5->SetBinContent(92,29);
   __5->SetBinContent(93,32);
   __5->SetBinContent(94,48);
   __5->SetBinContent(95,35);
   __5->SetBinContent(96,52);
   __5->SetBinContent(97,42);
   __5->SetBinContent(98,41);
   __5->SetBinContent(99,56);
   __5->SetBinContent(100,28);
   __5->SetBinContent(101,33);
   __5->SetBinContent(102,16);
   __5->SetBinContent(103,13);
   __5->SetBinContent(104,9);
   __5->SetBinContent(105,7);
   __5->SetBinContent(106,6);
   __5->SetBinContent(107,3);
   __5->SetBinContent(108,5);
   __5->SetBinContent(109,2);
   __5->SetBinContent(111,1);
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
