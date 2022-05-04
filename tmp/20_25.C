void 20_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 28 02:41:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1_ratio__130 = new TH1D("h1_ratio__130","",630,-1575,1575);
   h1_ratio__130->SetBinContent(310,16);
   h1_ratio__130->SetBinContent(311,18.02754);
   h1_ratio__130->SetBinContent(312,16.75067);
   h1_ratio__130->SetBinContent(313,20.99394);
   h1_ratio__130->SetBinContent(314,18.04207);
   h1_ratio__130->SetBinContent(315,18.19977);
   h1_ratio__130->SetBinContent(316,15.68784);
   h1_ratio__130->SetBinContent(317,12.1309);
   h1_ratio__130->SetBinContent(318,0.8157921);
   h1_ratio__130->SetBinError(310,4.009679);
   h1_ratio__130->SetBinError(311,2.208419);
   h1_ratio__130->SetBinError(312,1.80041);
   h1_ratio__130->SetBinError(313,1.868824);
   h1_ratio__130->SetBinError(314,1.651502);
   h1_ratio__130->SetBinError(315,1.645534);
   h1_ratio__130->SetBinError(316,1.513145);
   h1_ratio__130->SetBinError(317,1.350351);
   h1_ratio__130->SetBinError(318,0.3648784);
   h1_ratio__130->SetEntries(499.6734);
   h1_ratio__130->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   h1_ratio__130->GetXaxis()->SetRange(296,335);
   h1_ratio__130->GetXaxis()->CenterTitle(true);
   h1_ratio__130->GetXaxis()->SetLabelFont(42);
   h1_ratio__130->GetXaxis()->SetTitleSize(0.04);
   h1_ratio__130->GetXaxis()->SetTitleOffset(1.1);
   h1_ratio__130->GetXaxis()->SetTitleFont(42);
   h1_ratio__130->GetYaxis()->SetTitle("Tracks");
   h1_ratio__130->GetYaxis()->CenterTitle(true);
   h1_ratio__130->GetYaxis()->SetNdivisions(4000510);
   h1_ratio__130->GetYaxis()->SetLabelFont(42);
   h1_ratio__130->GetYaxis()->SetTitleSize(0.04);
   h1_ratio__130->GetYaxis()->SetTitleOffset(1.1);
   h1_ratio__130->GetYaxis()->SetTitleFont(42);
   h1_ratio__130->GetZaxis()->SetLabelFont(42);
   h1_ratio__130->GetZaxis()->SetTitleOffset(1);
   h1_ratio__130->GetZaxis()->SetTitleFont(42);
   h1_ratio__130->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
