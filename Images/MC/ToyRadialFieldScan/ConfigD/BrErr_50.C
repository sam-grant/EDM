void BrErr_50()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:19:18 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__5 = new TH1D("__5","Number of sub-runs: 50",1000,0,4);
   __5->SetBinContent(131,1);
   __5->SetBinContent(133,2);
   __5->SetBinContent(134,3);
   __5->SetBinContent(135,7);
   __5->SetBinContent(136,13);
   __5->SetBinContent(137,20);
   __5->SetBinContent(138,33);
   __5->SetBinContent(139,56);
   __5->SetBinContent(140,64);
   __5->SetBinContent(141,82);
   __5->SetBinContent(142,78);
   __5->SetBinContent(143,89);
   __5->SetBinContent(144,96);
   __5->SetBinContent(145,91);
   __5->SetBinContent(146,89);
   __5->SetBinContent(147,84);
   __5->SetBinContent(148,65);
   __5->SetBinContent(149,45);
   __5->SetBinContent(150,27);
   __5->SetBinContent(151,19);
   __5->SetBinContent(152,18);
   __5->SetBinContent(153,8);
   __5->SetBinContent(154,3);
   __5->SetBinContent(155,2);
   __5->SetBinContent(156,2);
   __5->SetBinContent(158,1);
   __5->SetBinContent(159,1);
   __5->SetBinContent(160,1);
   __5->SetEntries(1000);
   __5->SetLineWidth(3);
   __5->GetXaxis()->SetTitle("#deltaB_{r} [ppm]");
   __5->GetXaxis()->CenterTitle(true);
   __5->GetXaxis()->SetLabelFont(42);
   __5->GetXaxis()->SetTitleSize(0.04);
   __5->GetXaxis()->SetTitleOffset(1.1);
   __5->GetXaxis()->SetTitleFont(42);
   __5->GetYaxis()->SetTitle("Trials");
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
