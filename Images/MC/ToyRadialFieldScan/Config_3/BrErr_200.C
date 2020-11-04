void BrErr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:12 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__23 = new TH1D("__23","Number of sub-runs: 200",1000,0,4);
   __23->SetBinContent(168,1);
   __23->SetBinContent(169,3);
   __23->SetBinContent(170,7);
   __23->SetBinContent(171,24);
   __23->SetBinContent(172,49);
   __23->SetBinContent(173,96);
   __23->SetBinContent(174,109);
   __23->SetBinContent(175,133);
   __23->SetBinContent(176,169);
   __23->SetBinContent(177,165);
   __23->SetBinContent(178,94);
   __23->SetBinContent(179,84);
   __23->SetBinContent(180,42);
   __23->SetBinContent(181,17);
   __23->SetBinContent(182,4);
   __23->SetBinContent(183,3);
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
