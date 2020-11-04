void BrErr_300()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:12 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__35 = new TH1D("__35","Number of sub-runs: 300",1000,0,4);
   __35->SetBinContent(217,1);
   __35->SetBinContent(218,9);
   __35->SetBinContent(219,8);
   __35->SetBinContent(220,14);
   __35->SetBinContent(221,17);
   __35->SetBinContent(222,38);
   __35->SetBinContent(223,47);
   __35->SetBinContent(224,61);
   __35->SetBinContent(225,64);
   __35->SetBinContent(226,74);
   __35->SetBinContent(227,86);
   __35->SetBinContent(228,104);
   __35->SetBinContent(229,101);
   __35->SetBinContent(230,92);
   __35->SetBinContent(231,86);
   __35->SetBinContent(232,66);
   __35->SetBinContent(233,40);
   __35->SetBinContent(234,28);
   __35->SetBinContent(235,24);
   __35->SetBinContent(236,13);
   __35->SetBinContent(237,14);
   __35->SetBinContent(238,5);
   __35->SetBinContent(240,4);
   __35->SetBinContent(241,2);
   __35->SetBinContent(242,1);
   __35->SetBinContent(243,1);
   __35->SetEntries(1000);
   __35->SetLineWidth(3);
   __35->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __35->GetXaxis()->CenterTitle(true);
   __35->GetXaxis()->SetLabelFont(42);
   __35->GetXaxis()->SetTitleSize(0.04);
   __35->GetXaxis()->SetTitleOffset(1.1);
   __35->GetXaxis()->SetTitleFont(42);
   __35->GetYaxis()->SetTitle("Trials");
   __35->GetYaxis()->CenterTitle(true);
   __35->GetYaxis()->SetNdivisions(4000510);
   __35->GetYaxis()->SetLabelFont(42);
   __35->GetYaxis()->SetTitleSize(0.04);
   __35->GetYaxis()->SetTitleOffset(1.1);
   __35->GetYaxis()->SetTitleFont(42);
   __35->GetZaxis()->SetLabelFont(42);
   __35->GetZaxis()->SetTitleOffset(1);
   __35->GetZaxis()->SetTitleFont(42);
   __35->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
