void dBr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  7 18:20:58 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__3 = new TH1D("__3","Number of sub-runs: 75",300,0,3);
   __3->SetBinContent(90,2);
   __3->SetBinContent(91,5);
   __3->SetBinContent(92,4);
   __3->SetBinContent(93,6);
   __3->SetBinContent(94,19);
   __3->SetBinContent(95,18);
   __3->SetBinContent(96,36);
   __3->SetBinContent(97,34);
   __3->SetBinContent(98,41);
   __3->SetBinContent(99,49);
   __3->SetBinContent(100,73);
   __3->SetBinContent(101,79);
   __3->SetBinContent(102,84);
   __3->SetBinContent(103,91);
   __3->SetBinContent(104,61);
   __3->SetBinContent(105,73);
   __3->SetBinContent(106,57);
   __3->SetBinContent(107,57);
   __3->SetBinContent(108,40);
   __3->SetBinContent(109,43);
   __3->SetBinContent(110,22);
   __3->SetBinContent(111,32);
   __3->SetBinContent(112,22);
   __3->SetBinContent(113,11);
   __3->SetBinContent(114,14);
   __3->SetBinContent(115,12);
   __3->SetBinContent(116,7);
   __3->SetBinContent(117,2);
   __3->SetBinContent(118,3);
   __3->SetBinContent(122,1);
   __3->SetBinContent(124,2);
   __3->SetEntries(1000);
   __3->SetLineWidth(3);
   __3->GetXaxis()->SetTitle("Residual #deltaB_{r} [ppm]");
   __3->GetXaxis()->CenterTitle(true);
   __3->GetXaxis()->SetLabelFont(42);
   __3->GetXaxis()->SetTitleSize(0.04);
   __3->GetXaxis()->SetTitleOffset(1.1);
   __3->GetXaxis()->SetTitleFont(42);
   __3->GetYaxis()->SetTitle("Experiments");
   __3->GetYaxis()->CenterTitle(true);
   __3->GetYaxis()->SetNdivisions(4000510);
   __3->GetYaxis()->SetLabelFont(42);
   __3->GetYaxis()->SetTitleSize(0.04);
   __3->GetYaxis()->SetTitleOffset(1.1);
   __3->GetYaxis()->SetTitleFont(42);
   __3->GetZaxis()->SetLabelFont(42);
   __3->GetZaxis()->SetTitleOffset(1);
   __3->GetZaxis()->SetTitleFont(42);
   __3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
