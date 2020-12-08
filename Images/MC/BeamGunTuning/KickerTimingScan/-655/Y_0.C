void Y_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 15:36:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_30__15 = new TH1F("Y_30__15","-655",100,-100,100);
   Y_30__15->SetLineWidth(3);
   Y_30__15->GetXaxis()->SetTitle("Y [mm]");
   Y_30__15->GetXaxis()->CenterTitle(true);
   Y_30__15->GetXaxis()->SetLabelFont(42);
   Y_30__15->GetXaxis()->SetTitleSize(0.04);
   Y_30__15->GetXaxis()->SetTitleOffset(1.1);
   Y_30__15->GetXaxis()->SetTitleFont(42);
   Y_30__15->GetYaxis()->SetTitle("Ghost tracks");
   Y_30__15->GetYaxis()->CenterTitle(true);
   Y_30__15->GetYaxis()->SetNdivisions(4000510);
   Y_30__15->GetYaxis()->SetLabelFont(42);
   Y_30__15->GetYaxis()->SetTitleSize(0.04);
   Y_30__15->GetYaxis()->SetTitleOffset(1.1);
   Y_30__15->GetYaxis()->SetTitleFont(42);
   Y_30__15->GetZaxis()->SetLabelFont(42);
   Y_30__15->GetZaxis()->SetTitleOffset(1);
   Y_30__15->GetZaxis()->SetTitleFont(42);
   Y_30__15->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
