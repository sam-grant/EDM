void h_pull_acceptedDecays_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:30:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *_edmFit_pull__1 = new TH1D("_edmFit_pull__1","",40,-5,5);
   _edmFit_pull__1->SetBinContent(10,1);
   _edmFit_pull__1->SetBinContent(11,2);
   _edmFit_pull__1->SetBinContent(14,1);
   _edmFit_pull__1->SetBinContent(15,1);
   _edmFit_pull__1->SetBinContent(16,3);
   _edmFit_pull__1->SetBinContent(17,1);
   _edmFit_pull__1->SetBinContent(19,5);
   _edmFit_pull__1->SetBinContent(20,1);
   _edmFit_pull__1->SetBinContent(21,2);
   _edmFit_pull__1->SetBinContent(22,1);
   _edmFit_pull__1->SetBinContent(24,3);
   _edmFit_pull__1->SetBinContent(25,3);
   _edmFit_pull__1->SetBinContent(26,1);
   _edmFit_pull__1->SetBinContent(27,2);
   _edmFit_pull__1->SetBinContent(28,1);
   _edmFit_pull__1->SetBinContent(33,1);
   _edmFit_pull__1->SetEntries(29);
   _edmFit_pull__1->GetXaxis()->SetTitle("Pull [#sigma]");
   _edmFit_pull__1->GetXaxis()->CenterTitle(true);
   _edmFit_pull__1->GetXaxis()->SetLabelFont(42);
   _edmFit_pull__1->GetXaxis()->SetTitleSize(0.04);
   _edmFit_pull__1->GetXaxis()->SetTitleOffset(1.1);
   _edmFit_pull__1->GetXaxis()->SetTitleFont(42);
   _edmFit_pull__1->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   _edmFit_pull__1->GetYaxis()->CenterTitle(true);
   _edmFit_pull__1->GetYaxis()->SetNdivisions(4000510);
   _edmFit_pull__1->GetYaxis()->SetLabelFont(42);
   _edmFit_pull__1->GetYaxis()->SetTitleSize(0.04);
   _edmFit_pull__1->GetYaxis()->SetTitleOffset(1.1);
   _edmFit_pull__1->GetYaxis()->SetTitleFont(42);
   _edmFit_pull__1->GetZaxis()->SetLabelFont(42);
   _edmFit_pull__1->GetZaxis()->SetTitleOffset(1);
   _edmFit_pull__1->GetZaxis()->SetTitleFont(42);
   _edmFit_pull__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
