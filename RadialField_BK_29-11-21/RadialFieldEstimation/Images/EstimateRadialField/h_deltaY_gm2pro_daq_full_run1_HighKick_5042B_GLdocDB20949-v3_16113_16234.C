void h_deltaY_gm2pro_daq_full_run1_HighKick_5042B_GLdocDB20949-v3_16113_16234()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jul 21 05:28:59 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *hist__2 = new TH1D("hist__2","",100,0.8,1.8);
   hist__2->SetBinContent(3,1);
   hist__2->SetBinContent(4,1);
   hist__2->SetBinContent(5,1);
   hist__2->SetBinContent(6,4);
   hist__2->SetBinContent(7,3);
   hist__2->SetBinContent(8,3);
   hist__2->SetBinContent(10,1);
   hist__2->SetBinContent(11,1);
   hist__2->SetBinContent(12,1);
   hist__2->SetBinContent(13,2);
   hist__2->SetBinContent(15,2);
   hist__2->SetBinContent(16,1);
   hist__2->SetBinContent(17,1);
   hist__2->SetBinContent(20,1);
   hist__2->SetBinContent(21,1);
   hist__2->SetBinContent(22,3);
   hist__2->SetBinContent(23,2);
   hist__2->SetBinContent(24,9);
   hist__2->SetBinContent(25,2);
   hist__2->SetBinContent(26,2);
   hist__2->SetBinContent(27,7);
   hist__2->SetBinContent(28,2);
   hist__2->SetBinContent(29,3);
   hist__2->SetBinContent(30,5);
   hist__2->SetBinContent(31,2);
   hist__2->SetBinContent(32,1);
   hist__2->SetBinContent(33,4);
   hist__2->SetBinContent(34,4);
   hist__2->SetBinContent(35,1);
   hist__2->SetBinContent(36,2);
   hist__2->SetBinContent(37,2);
   hist__2->SetBinContent(38,3);
   hist__2->SetBinContent(39,2);
   hist__2->SetBinContent(40,1);
   hist__2->SetBinContent(41,3);
   hist__2->SetBinContent(44,1);
   hist__2->SetBinContent(47,1);
   hist__2->SetEntries(86);
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
   TText *pt_LaTex = pt->AddText("1.04
#pm0.01
");
   pt_LaTex = pt->AddText("0.109
#pm0.008
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
