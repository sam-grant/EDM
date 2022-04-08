void S12_h_pull_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 11:31:50 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12_edmFit_pull__1 = new TH1D("S12_edmFit_pull__1","S12",40,-5,5);
   S12_edmFit_pull__1->SetBinContent(8,1);
   S12_edmFit_pull__1->SetBinContent(10,2);
   S12_edmFit_pull__1->SetBinContent(11,1);
   S12_edmFit_pull__1->SetBinContent(15,2);
   S12_edmFit_pull__1->SetBinContent(17,4);
   S12_edmFit_pull__1->SetBinContent(18,1);
   S12_edmFit_pull__1->SetBinContent(19,1);
   S12_edmFit_pull__1->SetBinContent(20,3);
   S12_edmFit_pull__1->SetBinContent(21,3);
   S12_edmFit_pull__1->SetBinContent(24,1);
   S12_edmFit_pull__1->SetBinContent(25,2);
   S12_edmFit_pull__1->SetBinContent(26,1);
   S12_edmFit_pull__1->SetBinContent(27,3);
   S12_edmFit_pull__1->SetBinContent(28,1);
   S12_edmFit_pull__1->SetBinContent(29,2);
   S12_edmFit_pull__1->SetBinContent(31,1);
   S12_edmFit_pull__1->SetEntries(29);
   S12_edmFit_pull__1->GetXaxis()->SetTitle("Pull [#sigma]");
   S12_edmFit_pull__1->GetXaxis()->CenterTitle(true);
   S12_edmFit_pull__1->GetXaxis()->SetLabelFont(42);
   S12_edmFit_pull__1->GetXaxis()->SetTitleSize(0.04);
   S12_edmFit_pull__1->GetXaxis()->SetTitleOffset(1.1);
   S12_edmFit_pull__1->GetXaxis()->SetTitleFont(42);
   S12_edmFit_pull__1->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S12_edmFit_pull__1->GetYaxis()->CenterTitle(true);
   S12_edmFit_pull__1->GetYaxis()->SetNdivisions(4000510);
   S12_edmFit_pull__1->GetYaxis()->SetLabelFont(42);
   S12_edmFit_pull__1->GetYaxis()->SetTitleSize(0.04);
   S12_edmFit_pull__1->GetYaxis()->SetTitleOffset(1.1);
   S12_edmFit_pull__1->GetYaxis()->SetTitleFont(42);
   S12_edmFit_pull__1->GetZaxis()->SetLabelFont(42);
   S12_edmFit_pull__1->GetZaxis()->SetTitleOffset(1);
   S12_edmFit_pull__1->GetZaxis()->SetTitleFont(42);
   S12_edmFit_pull__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
