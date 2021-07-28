void h_deltaY_gm2pro_daq_offline_dqc_run2C_24683_25045()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 05:29:18 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *hist__2 = new TH1D("hist__2","",100,0.8,1.8);
   hist__2->SetBinContent(0,146);
   hist__2->SetBinContent(1,7);
   hist__2->SetBinContent(2,10);
   hist__2->SetBinContent(3,27);
   hist__2->SetBinContent(4,22);
   hist__2->SetBinContent(5,12);
   hist__2->SetBinContent(6,6);
   hist__2->SetBinContent(7,2);
   hist__2->SetBinContent(8,3);
   hist__2->SetBinContent(9,1);
   hist__2->SetEntries(236);
   hist__2->SetStats(0);
   hist__2->SetFillColor(1);
   hist__2->SetFillStyle(3001);
   hist__2->GetXaxis()->SetTitle("#Delta#LTy_{calo}#GT [mm]");
   hist__2->GetXaxis()->CenterTitle(true);
   hist__2->GetXaxis()->SetLabelFont(42);
   hist__2->GetXaxis()->SetLabelSize(0.035);
   hist__2->GetXaxis()->SetTitleOffset(1.1);
   hist__2->GetXaxis()->SetTitleFont(42);
   hist__2->GetYaxis()->SetTitle("Runs / 0.01 mm");
   hist__2->GetYaxis()->CenterTitle(true);
   hist__2->GetYaxis()->SetNdivisions(4000510);
   hist__2->GetYaxis()->SetLabelFont(42);
   hist__2->GetYaxis()->SetLabelSize(0.035);
   hist__2->GetYaxis()->SetTitleOffset(1.1);
   hist__2->GetYaxis()->SetTitleFont(42);
   hist__2->GetZaxis()->SetLabelFont(42);
   hist__2->GetZaxis()->SetLabelSize(0.035);
   hist__2->GetZaxis()->SetTitleSize(0.035);
   hist__2->GetZaxis()->SetTitleFont(42);
   hist__2->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(20);
   TText *pt_LaTex = pt->AddText("0.833
#pm0.002
");
   pt_LaTex = pt->AddText("0.0166
#pm0.001
");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(20);
   pt_LaTex = pt->AddText("#LT#Deltay#GT [mm]");
   pt_LaTex = pt->AddText("#sigma [mm]");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
