void hDiff_Run4_Nearline_2021()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov  4 15:14:54 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *hist__1 = new TH1D("hist__1","",20,-1,1);
   hist__1->SetBinContent(10,10);
   hist__1->SetBinContent(11,13);
   hist__1->SetEntries(23);
   hist__1->SetStats(0);
   hist__1->SetFillColor(1);
   hist__1->SetFillStyle(3001);
   hist__1->GetXaxis()->SetTitle("(#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{} [mm]");
   hist__1->GetXaxis()->CenterTitle(true);
   hist__1->GetXaxis()->SetLabelFont(42);
   hist__1->GetXaxis()->SetLabelSize(0.035);
   hist__1->GetXaxis()->SetTitleOffset(1.1);
   hist__1->GetXaxis()->SetTitleFont(42);
   hist__1->GetYaxis()->SetTitle("Calos / 0.1 mm");
   hist__1->GetYaxis()->CenterTitle(true);
   hist__1->GetYaxis()->SetNdivisions(4000510);
   hist__1->GetYaxis()->SetLabelFont(42);
   hist__1->GetYaxis()->SetLabelSize(0.035);
   hist__1->GetYaxis()->SetTitleOffset(1.1);
   hist__1->GetYaxis()->SetTitleFont(42);
   hist__1->GetZaxis()->SetLabelFont(42);
   hist__1->GetZaxis()->SetLabelSize(0.035);
   hist__1->GetZaxis()->SetTitleSize(0.035);
   hist__1->GetZaxis()->SetTitleFont(42);
   hist__1->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(20);
   TText *pt_LaTex = pt->AddText("-0.0002
#pm0.005
");
   pt_LaTex = pt->AddText("0.023
#pm0.003
");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(20);
   pt_LaTex = pt->AddText("#LTy#GT [mm]");
   pt_LaTex = pt->AddText("#sigma [mm]");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
