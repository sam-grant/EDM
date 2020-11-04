void BrErr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:44 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__23 = new TH1D("__23","Number of sub-runs: 200",1000,0,4);
   __23->SetBinContent(138,1);
   __23->SetBinContent(139,2);
   __23->SetBinContent(140,7);
   __23->SetBinContent(141,10);
   __23->SetBinContent(142,15);
   __23->SetBinContent(143,25);
   __23->SetBinContent(144,51);
   __23->SetBinContent(145,63);
   __23->SetBinContent(146,78);
   __23->SetBinContent(147,91);
   __23->SetBinContent(148,105);
   __23->SetBinContent(149,95);
   __23->SetBinContent(150,101);
   __23->SetBinContent(151,103);
   __23->SetBinContent(152,76);
   __23->SetBinContent(153,58);
   __23->SetBinContent(154,53);
   __23->SetBinContent(155,22);
   __23->SetBinContent(156,19);
   __23->SetBinContent(157,13);
   __23->SetBinContent(158,5);
   __23->SetBinContent(159,5);
   __23->SetBinContent(160,1);
   __23->SetBinContent(163,1);
   __23->SetEntries(1000);
   __23->SetLineWidth(3);
   __23->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __23->GetXaxis()->CenterTitle(true);
   __23->GetXaxis()->SetLabelFont(42);
   __23->GetXaxis()->SetTitleSize(0.04);
   __23->GetXaxis()->SetTitleOffset(1.1);
   __23->GetXaxis()->SetTitleFont(42);
   __23->GetYaxis()->SetTitle("Trials");
   __23->GetYaxis()->CenterTitle(true);
   __23->GetYaxis()->SetNdivisions(4000510);
   __23->GetYaxis()->SetLabelFont(42);
   __23->GetYaxis()->SetTitleSize(0.04);
   __23->GetYaxis()->SetTitleOffset(1.1);
   __23->GetYaxis()->SetTitleFont(42);
   __23->GetZaxis()->SetLabelFont(42);
   __23->GetZaxis()->SetTitleOffset(1);
   __23->GetZaxis()->SetTitleFont(42);
   __23->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
