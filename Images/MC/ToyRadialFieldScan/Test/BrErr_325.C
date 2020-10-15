void BrErr_325()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct 14 22:34:52 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__38 = new TH1D("__38","Number of sub-runs: 325",1000,0,4);
   __38->SetBinContent(96,2);
   __38->SetBinContent(97,3);
   __38->SetBinContent(98,13);
   __38->SetBinContent(99,41);
   __38->SetBinContent(100,101);
   __38->SetBinContent(101,148);
   __38->SetBinContent(102,190);
   __38->SetBinContent(103,215);
   __38->SetBinContent(104,127);
   __38->SetBinContent(105,98);
   __38->SetBinContent(106,37);
   __38->SetBinContent(107,16);
   __38->SetBinContent(108,9);
   __38->SetEntries(1000);
   __38->SetLineWidth(3);
   __38->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __38->GetXaxis()->CenterTitle(true);
   __38->GetXaxis()->SetLabelFont(42);
   __38->GetXaxis()->SetTitleSize(0.04);
   __38->GetXaxis()->SetTitleOffset(1.1);
   __38->GetXaxis()->SetTitleFont(42);
   __38->GetYaxis()->SetTitle("Experiments");
   __38->GetYaxis()->CenterTitle(true);
   __38->GetYaxis()->SetNdivisions(4000510);
   __38->GetYaxis()->SetLabelFont(42);
   __38->GetYaxis()->SetTitleSize(0.04);
   __38->GetYaxis()->SetTitleOffset(1.1);
   __38->GetYaxis()->SetTitleFont(42);
   __38->GetZaxis()->SetLabelFont(42);
   __38->GetZaxis()->SetTitleOffset(1);
   __38->GetZaxis()->SetTitleFont(42);
   __38->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
